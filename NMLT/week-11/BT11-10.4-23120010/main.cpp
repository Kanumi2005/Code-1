#include <cstdio>
#include <cctype>

void encode(int k, std::FILE* input, std::FILE* output);
void decode(int k, std::FILE* input, std::FILE* output);

int main() {
    int k {};
    int option {};
    char name[100] {};
    std::printf("Lua chon ma hoa (0) hay giai ma (1): ");
    std::scanf(" %d", &option);
    std::printf("Chon khoa K = ");
    std::scanf(" %d", &k);
    std::printf("Nhap duong dan tep doc mat lenh/ van ban: ");
    std::scanf(" %[^\n]s", name);
    std::FILE* input = std::fopen(name, "r");
    if (input == nullptr) {
        std::printf("Tep mo khong thanh cong!!!\n");
        return 0;
    }
    std::printf("Nhap duong dan tep xuat mat lenh/ van ban: ");
    std::scanf(" %[^\n]s", name);
    std::FILE* output = std::fopen(name, "w");
    if (output == nullptr) {
        std::printf("Tep mo khong thanh cong!!!\n");
        return 0;
    }
    switch (option) {
    case 0:
        encode(k, input, output);
        break;
    case 1:
        decode(k, input, output);
    }
    std::fclose(input);
    std::fclose(output);

    return 0;
}

void encode(int k, std::FILE* input, std::FILE* output) {
    for (char c {}; (c = fgetc(input)) != EOF; ) {
        if (std::isupper(c))
            c = 'A' + (c + k - 'A') % 26;
        else if (std::islower(c))
            c = 'a' + (c + k - 'a') % 26;
        
        fputc(c, output);
    }
}

void decode(int k, std::FILE* input, std::FILE* output) {
    for (char c{}; (c = fgetc(input)) != EOF; ) {
        if (std::isupper(c))
            c = (c - 'A' - k >= 0) ? ('A' + (c - 'A' - k) % 26) : ('A' + (c - 'A' - k) % 26) + 26;
        else if (std::islower(c))
            c = (c - 'a' - k >= 0) ? ('a' + (c - 'a' - k) % 26) : ('a' + (c - 'a' - k) % 26) + 26;
        fputc(c, output);
    }
}