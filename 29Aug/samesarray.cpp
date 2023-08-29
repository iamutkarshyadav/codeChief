if (N != B.size())
{
    return false; // If arrays have different sizes, they can't be equal
}

unordered_map<ll, int> freqA, freqB; // Maps to store the frequency of elements

// Count the frequency of elements in array A
for (int i = 0; i < N; i++)
{
    freqA[A[i]]++;
}

// Count the frequency of elements in array B
for (int i = 0; i < N; i++)
{
    freqB[B[i]]++;
}

// Compare the frequencies of elements in both arrays
for (const auto &pair : freqA)
{
    if (freqB.find(pair.first) == freqB.end() || freqB[pair.first] != pair.second)
    {
        return false; // If frequencies don't match, arrays are not equal
    }
}

return true