import pandas as pd

df = {
    'ca': [35, 37, 38],
    'tx': [23, 24, 26], 
    'md': [5, 5, 6]
}

df = pd.DataFrame(df)

print('population:\n', df, '\n')

df.to_csv('population.csv', index=False)