
template <typename T, int N>
constexpr int ArrayLength(const T (&)[N])
{
    return N;
}