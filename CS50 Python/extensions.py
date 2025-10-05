filename = input("File name: ").lower().strip()
media_types = {
        ".gif": "image/gif",
        ".jpg": "image/jpeg",
        ".jpeg": "image/jpeg",
        ".png": "image/png",
        ".pdf": "application/pdf",
        ".txt": "text/plain",
        ".zip": "application/zip"
}
flag = True
for i in media_types:
    if i in filename:
        print(media_types[i])
        flag = False
        break

if flag:
    print("application/octet-stream")  
    