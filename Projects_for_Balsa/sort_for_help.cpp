#include "stdafx.h"
#include "Prototypes.h"

void sort_for_help(int rangeOfArray, int* Array)
{
    int counter = 0; // счетчик для кол-ва удовл. элементов

    for (int i = 0; i < rangeOfArray; i++) // узнаем сколько таких элементов
    {
        if ((abs(Array[i])) <= 1)
        {
            counter++;
        }
    }

    //Наш массив я разделю на два маленьких массива
    //Одна половина отвечает за элементы, которые abs <= 1
    //Другая - это все остальные элементы

    int* tempArrayTrue = new int[counter]; //Удовл. элементы
    int* tempArrayFalse = new int[rangeOfArray - counter]; //Неудовл. элементы

    int j = 0;
    int k = 0;

    //Собственно сам процесс разделения массива на два других
    for (int i = 0; i < rangeOfArray; i++)
    {
        if ((abs(Array[i])) <= 1)
        {
            tempArrayTrue[j] = Array[i];
            j++;
        }
        else
        {
            tempArrayFalse[k] = Array[i];
            k++;
        }
    }

    //Играем в лего, собираем главный массив по-новой. Сорт Массив = true элементы + false элементы
    int* sortedArray = new int[rangeOfArray];

    for (int i = 0; i < counter; i++)
    {
        sortedArray[i] = tempArrayTrue[i];
    }

    j = 0;

    for (int i = counter; i < rangeOfArray; i++)
    {
        sortedArray[i] = tempArrayFalse[j];
        j++;
    }

    //выводим на экран
    for (int i = 0; i < rangeOfArray; i++)
    {
        cout << sortedArray[i] << " ";
    }

    //обязательно чистим то, что больше не используем!
    delete[] tempArrayTrue;
    delete[] tempArrayFalse;
    delete[] sortedArray;
}