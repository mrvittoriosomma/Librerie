void swap(int *_valore1, int *_valore2);
void bubleSort(int _vettore[], int _lunghezza);
void inseretionSort(int _vettore[], int _lunghezza);
void selectionSort(int _vettore[], int _lunghezza);

void swap(int *_valore1, int *_valore2)
{
    int tmp = *_valore1;
    *_valore1 = *_valore2;
    *_valore2 = tmp;
}

void bubleSort(int _vettore[], int _lunghezza)
{
    int i, j;
    for (i = 0; i < _lunghezza - 1; i++)
        for (j = 0; j < _lunghezza - i - 1; j++)
            if (_vettore[j] > _vettore[j + 1])
                swap(&_vettore[j], &_vettore[j + 1]);
}

void inseretionSort(int _vettore[], int _lunghezza)
{
    int i, sentinella, j;
    for (i = 1; i < _lunghezza; i++)
    {
        sentinella = _vettore[i];
        j = i - 1;
        while (j >= 0 && _vettore[j] > sentinella)
        {
            _vettore[j + 1] = _vettore[j];
            j = j - 1;
        }
        _vettore[j + 1] = sentinella;
    }
}

void selectionSort(int _vettore[], int _lunghezza)
{
    int i, j, minimo;
    for (i = 0; i < _lunghezza - 1; i++)
    {
        minimo = i;
        for (j = i + 1; j < _lunghezza; j++)
            if (_vettore[j] < _vettore[minimo])
                minimo = j;
        swap(&_vettore[minimo], &_vettore[i]);
    }
}
