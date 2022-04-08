template <int TLength>
int chop1(int const number, int const (&arrayRef)[TLength])
{
    int minIndex = 0;
    int maxIndex = TLength - 1;

    while (minIndex <= maxIndex)
    {
        int currentIndex = (minIndex + maxIndex) / 2;

        if (number == arrayRef[currentIndex])
            return currentIndex; // encontrou!

        if (number < arrayRef[currentIndex])
        {
            maxIndex = currentIndex - 1; // antes
            continue;
        }

        minIndex = currentIndex + 1; // depois
    }

    return -1;
}