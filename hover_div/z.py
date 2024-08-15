import os

# Path to the folder containing the images
folder_path = 'C:\\Users\\mdmir\\Desktop\\code\\WebDev\\hover_div\\images\\temp'

# Loop through each image from image-1.jpg to image-50.jpg
for i in range(1, 51):
    # Original filename
    old_name = f"image-{i}.jpg"
    
    # New filename (adjusting the numbering)
    new_name = f"image-{i + 55}.jpg"
    
    # Full path for old and new names
    old_path = os.path.join(folder_path, old_name)
    new_path = os.path.join(folder_path, new_name)
    
    # Rename the file
    os.rename(old_path, new_path)

print("Renaming complete!")
