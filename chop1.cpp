
template <int TLength>
int chop1(int number, int const (&arrayRef)[TLength])
{
    int minIndex = 0;
    int maxIndex = TLength - 1;

    while (minIndex <= maxIndex)
    {
        int currentIndex = (minIndex + maxIndex) / 2;

        int current = arrayRef[currentIndex];

        if (current == number)
            return currentIndex; // encontrou!

        if (number < current)
        {
            maxIndex = currentIndex - 1; // antes
            continue;
        }

        minIndex = currentIndex + 1; // depois
    }

    return -1;
}