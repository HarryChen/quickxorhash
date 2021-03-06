#ifndef QUICKXORHASH_H
#define QUICKXORHASH_H

#include <stdint.h>

struct qxhash {
    size_t      width;
    size_t      shift;
    size_t      shifted;
    size_t      len;
    size_t      cell_len;
    uint64_t    *cell;
};

typedef struct qxhash qxhash;

qxhash  *qxh_new( void );
void    qxh_update( qxhash *, uint8_t *, size_t );
char    *qxh_finalize( qxhash * );
void    qxh_free( qxhash * );

#endif /* QUICKXORHASH_H */
