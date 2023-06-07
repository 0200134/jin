import pandas  as ps

df=ps.read_excel("elite_english_special.xlsx", engine = "openpyxl")
print(df)

cell_values=df.values.tolist()

print(cell_values)

