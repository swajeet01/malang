// Include Guard
#ifndef MLANG_OOP_H
#define MLANG_OOP_H 1

// OOP

#define CLASSBEG(class) typedef struct class {

#define CLASSEND(class) } class;

#define MFNBEG(class, params...) (class* this, ##params) {

#define MFNDEF(class, ret_type, name, params...) ret_type ma_func_##class##_##name MFNBEG(class, ##params)

#define mwith(params) params;

#define CONSTR(class, params...) MFNDEF(class, class*, ma_init_##class , ##params)
//class* ma_init_##class 

#define new(class, idn, params...) class* idn = ma_init_##class (params);

#endif /* MALANG_OOP_H Include Gurad */