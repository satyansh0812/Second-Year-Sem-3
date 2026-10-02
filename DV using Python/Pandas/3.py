import pandas as pd

df = {
    'Name': ['Alex', 'Bob', 'Clarke'],
    'Age': [10, 12, 13],
}
df = pd.DataFrame(df)
print(df, '\n')
df.to_csv('data.csv', index=False)