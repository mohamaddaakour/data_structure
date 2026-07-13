from typing import List

def criteria_sorter(arr: List[str]) -> List[str]:

    vowels: str = "aeiou"

    def count_vowels(arr) -> int:
        count: int = 0

        for i in arr:
            if i in vowels:
                # in python we can't write count++
                count += 1

        return count
    
    # to sort with 3 criterias in order: with count of vowels first, with length second,
    # and with alphanumeric third
    sorted_list = sorted(arr, key=lambda word: (count_vowels(word), len(word), word))

    return sorted_list

print(criteria_sorter(["dog", "cat", "hi", "a"]))

# if I want any criteria to be sorted reversely (decreasing) I have to add - sign
# sorted(arr, key=lambda word: (-count_vowels(word), len(word), word))