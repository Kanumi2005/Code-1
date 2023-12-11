#include <cstdio>
#include <climits>

int main() {
    char name[100] {};
    std::printf("Nhap duong dan toi tap tin matrix.txt: ");
    std::scanf(" %[^\n]s", name);
    std::FILE* input = std::fopen(name, "r");

    if (input == nullptr)
        std::printf("Tap tin mo khong thanh cong!!!\n");
    else {
        std::printf("Tap tin mo thanh cong.\n");
        int m {}, n {}, matrix[100][100] {};
        int sum {}, max = INT_MIN;
        std::fscanf(input, " %d %d", &m, &n);
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j) {
                std::fscanf(input, " %d", &matrix[i][j]);
                sum += matrix[i][j];
                if (max < matrix[i][j])
                    max = matrix[i][j];
            }
        std::printf("Nhap duong dan toi tap tin result.txt: ");
        std::scanf(" %[^\n]s", name);
        std::FILE* output = std::fopen(name, "w");
        if (2 * max == sum)
            std::fprintf(output, "%d", max);
        std::fclose(input);
        std::fclose(output);
    }
    return 0;
    
}