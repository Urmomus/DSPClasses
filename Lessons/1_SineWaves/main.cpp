#include <cmath>
#include <iostream>
#include <fstream>

const int SAMPLE_RATE = 1024;                       // Частота дискретизации
const double TIME_SECONDS = 1;                      // Длительность сигнала в секундах
const int SIZE = TIME_SECONDS * SAMPLE_RATE;        // Размер сигнала в отсчётах
const double SAMPLING_PERIOD = 1. / SAMPLE_RATE;    // Период дискретизации
const double FREQUENCY = 1;                         // Частота сигнала в герцах
const double AMPLITUDE = 1;                         // Амплитуда сигнала
const double PHASE = 0;                             // Фаза сигнала
const double VERTICAL_SHIFT = 0;                    // Смещение сигнала по вертикали

int main()
{
    double t;
    std::ofstream fout("../data/sinewave.txt");
    for (int i = 0; i < SIZE; ++i)
    {
        t = i * SAMPLING_PERIOD;
        fout << t << '\t' << AMPLITUDE * sin(2 * M_PI * FREQUENCY * t + PHASE) + VERTICAL_SHIFT << std::endl;
    }
}
