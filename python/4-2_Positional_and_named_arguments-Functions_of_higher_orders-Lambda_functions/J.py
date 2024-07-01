def secret_replace(text, **replace):
    ans = ''
    for char in text:
        if char in replace:
            ans += replace[char][0]
            replace[char] = replace[char][1:] + (replace[char][0],)
        else:
            ans += char
    return ans