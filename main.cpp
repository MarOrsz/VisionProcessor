#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    // Wczytanie obrazu z pliku
    cv::Mat image = cv::imread("obraz.jpg");

    // Sprawdzenie, czy obraz został poprawnie wczytany
    if (image.empty()) {
        std::cout << "Nie udało się wczytać obrazu!" << std::endl;
        return -1;
    }

    // Wyświetlenie obrazu w oknie
    cv::imshow("Obraz", image);

    // Oczekiwanie na naciśnięcie klawisza
    cv::waitKey(0);

    // Zamknięcie wszystkich okien
    cv::destroyAllWindows();

    return 0;
}