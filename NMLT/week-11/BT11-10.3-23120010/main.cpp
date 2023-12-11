#include <cstdio>

int main() {
    char name[100] {};
    std::printf("Nhap duong dan tep thu nhat: ");
    std::scanf(" %[^\n]s", name);
    std::FILE* file1 = std::fopen(name, "a");
    if (file1 == nullptr) {
        std::printf("Tep mo khong thanh cong!!!\n");
        return 0;
    }
    std::printf("Nhap duong dan tep thu hai: ");
    std::scanf(" %[^\n]s", name);
    std::FILE* file2 = std::fopen(name, "r");
    if (file2 == nullptr) {
        std::printf("Tep mo khong thanh cong!!!\n");
        return 0;
    }
    for (char c {}; (c = fgetc(file2)) != EOF; ) {
        fputc(c, file1);
    }
    std::fclose(file1);
    std::fclose(file2);

    return 0;
}