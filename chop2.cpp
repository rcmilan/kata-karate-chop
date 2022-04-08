
template <int TLength>
int recursiveChop(int const number, int const (&arrayRef)[TLength], int const min, int const max)
{
    if (min > max)
        return -1;

    int currentIndex = (min + max) / 2;

    if (number == arrayRef[currentIndex])
        return currentIndex; // encontrou!

    if (number < arrayRef[currentIndex]) // Antes
        return recursiveChop(number, arrayRef, min, currentIndex - 1);

    return recursiveChop(number, arrayRef, currentIndex + 1, max); // depois
}

template <int TLength>
int chop2(int const number, int const (&arrayRef)[TLength])
{
    int maxIndex = TLength - 1;

    return recursiveChop(number, arrayRef, 0, maxIndex);
}