//
// Created by dlohan on 4/28/19.
//

int count_tetri(tetri_t *tetri)
{
    int nb = 1;
    tetri_t *begin = tetri;

    while (tetri != NULL) {
        nb++;
        tetri = tetri->next;
    }
    tetri = begin;
    return nb;
}

void display_tetriminos(tetri_t *tretri)
{
    tetri_t *begin = tetri;
    int nb = count_tetri(tetri);
    my_putstr("Tetriminos :  ");
    my_putnbr(nb);
    my_putstr("\n");

    while (tetri != NULL) {
        my_putstr("Tetriminos :  Name ");
        my_putstr(tetri->name);
        my_putstr(" : Size ");
        my_putnbr(tetri->width);
        my_putstr("*");
        my_putstr(tetri->height);
        my_putstr(" : Color ");
        my_putnbr(tetri->color);
        my_putstr(" :\n");
        my_putstr(tetri->tetrimino);
        tetri = tetri->next;
    }
    tetri = begin;
}