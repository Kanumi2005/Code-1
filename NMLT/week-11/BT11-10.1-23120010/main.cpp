#include <cstdio>

bool isprime(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    char name[100] {};
    std::printf("Nhap duong dan toi tap tin input.txt: ");
    std::scanf(" %[^\n]s", name);
    std::FILE* input = std::fopen(name, "r");
    if (input == nullptr)
        printf("Tap tin mo khong thanh cong!!!\n");
    else {
        printf("Tap tin mo thanh cong.\n");
        
        int m {}, n {};
        std::fscanf(input, " %d %d", &m, &n);
        std::printf("Nhap duong dan toi tap tin ouput.txt: ");
        std::scanf(" %[^\n]s", name);
        std::FILE* output = std::fopen(name, "w");
        std::fprintf(output, "Cac so nguyen to trong doan [%d, %d] la \n", m, n);
        for (int i = m; i <= n; ++i)
            if (isprime(i))
                std::fprintf(output, "%d ", i);
        std::fclose(input);
        std::fclose(output);
    }  
    return 0;   
}