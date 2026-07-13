def count_occurences(arr: list[str]) -> dict[str, int]:
    counts: dict[str, int] = {}

    for item in arr:
        # this will check if the character is not a key inside the dictinary
        if item not in counts:
            counts[item] = 1

        else:
            counts[item] += 1

    return counts

print(count_occurences(["a", "a", "b", "c", "d", "d"]))


# if we have a dictinary we can add a non existing key and value for it
# but we can't read (will cause an error)
# we can read using .get(method)

info = {
}

print(info.get("grade")) # None