== Vector Loads and Stores Intrinsics
== Vector Loads and Stores Segment Instructions
[[vector-single-width-integer-add-and-subtract]]
=== Vector Single-Width Integer Add and Subtract Intrinsics
vint8mf8_t __riscv_vand_vv_i8mf8 (vint8mf8_t op1, vint8mf8_t op2, size_t vl);
vint8mf8_t __riscv_vand_vx_i8mf8 (vint8mf8_t op1, int8_t op2, size_t vl);
vint8mf4_t __riscv_vand_vv_i8mf4 (vint8mf4_t op1, vint8mf4_t op2, size_t vl);
vint8mf4_t __riscv_vand_vx_i8mf4 (vint8mf4_t op1, int8_t op2, size_t vl);
vint8mf2_t __riscv_vand_vv_i8mf2 (vint8mf2_t op1, vint8mf2_t op2, size_t vl);
vint8mf2_t __riscv_vand_vx_i8mf2 (vint8mf2_t op1, int8_t op2, size_t vl);
vint8m1_t __riscv_vand_vv_i8m1 (vint8m1_t op1, vint8m1_t op2, size_t vl);
vint8m1_t __riscv_vand_vx_i8m1 (vint8m1_t op1, int8_t op2, size_t vl);
vint8m2_t __riscv_vand_vv_i8m2 (vint8m2_t op1, vint8m2_t op2, size_t vl);
vint8m2_t __riscv_vand_vx_i8m2 (vint8m2_t op1, int8_t op2, size_t vl);
vint8m4_t __riscv_vand_vv_i8m4 (vint8m4_t op1, vint8m4_t op2, size_t vl);
vint8m4_t __riscv_vand_vx_i8m4 (vint8m4_t op1, int8_t op2, size_t vl);
vint8m8_t __riscv_vand_vv_i8m8 (vint8m8_t op1, vint8m8_t op2, size_t vl);
vint8m8_t __riscv_vand_vx_i8m8 (vint8m8_t op1, int8_t op2, size_t vl);
vint16mf4_t __riscv_vand_vv_i16mf4 (vint16mf4_t op1, vint16mf4_t op2, size_t vl);
vint16mf4_t __riscv_vand_vx_i16mf4 (vint16mf4_t op1, int16_t op2, size_t vl);
vint16mf2_t __riscv_vand_vv_i16mf2 (vint16mf2_t op1, vint16mf2_t op2, size_t vl);
vint16mf2_t __riscv_vand_vx_i16mf2 (vint16mf2_t op1, int16_t op2, size_t vl);
vint16m1_t __riscv_vand_vv_i16m1 (vint16m1_t op1, vint16m1_t op2, size_t vl);
vint16m1_t __riscv_vand_vx_i16m1 (vint16m1_t op1, int16_t op2, size_t vl);
vint16m2_t __riscv_vand_vv_i16m2 (vint16m2_t op1, vint16m2_t op2, size_t vl);
vint16m2_t __riscv_vand_vx_i16m2 (vint16m2_t op1, int16_t op2, size_t vl);
vint16m4_t __riscv_vand_vv_i16m4 (vint16m4_t op1, vint16m4_t op2, size_t vl);
vint16m4_t __riscv_vand_vx_i16m4 (vint16m4_t op1, int16_t op2, size_t vl);
vint16m8_t __riscv_vand_vv_i16m8 (vint16m8_t op1, vint16m8_t op2, size_t vl);
vint16m8_t __riscv_vand_vx_i16m8 (vint16m8_t op1, int16_t op2, size_t vl);
vint32mf2_t __riscv_vand_vv_i32mf2 (vint32mf2_t op1, vint32mf2_t op2, size_t vl);
vint32mf2_t __riscv_vand_vx_i32mf2 (vint32mf2_t op1, int32_t op2, size_t vl);
vint32m1_t __riscv_vand_vv_i32m1 (vint32m1_t op1, vint32m1_t op2, size_t vl);
vint32m1_t __riscv_vand_vx_i32m1 (vint32m1_t op1, int32_t op2, size_t vl);
vint32m2_t __riscv_vand_vv_i32m2 (vint32m2_t op1, vint32m2_t op2, size_t vl);
vint32m2_t __riscv_vand_vx_i32m2 (vint32m2_t op1, int32_t op2, size_t vl);
vint32m4_t __riscv_vand_vv_i32m4 (vint32m4_t op1, vint32m4_t op2, size_t vl);
vint32m4_t __riscv_vand_vx_i32m4 (vint32m4_t op1, int32_t op2, size_t vl);
vint32m8_t __riscv_vand_vv_i32m8 (vint32m8_t op1, vint32m8_t op2, size_t vl);
vint32m8_t __riscv_vand_vx_i32m8 (vint32m8_t op1, int32_t op2, size_t vl);
vint64m1_t __riscv_vand_vv_i64m1 (vint64m1_t op1, vint64m1_t op2, size_t vl);
vint64m1_t __riscv_vand_vx_i64m1 (vint64m1_t op1, int64_t op2, size_t vl);
vint64m2_t __riscv_vand_vv_i64m2 (vint64m2_t op1, vint64m2_t op2, size_t vl);
vint64m2_t __riscv_vand_vx_i64m2 (vint64m2_t op1, int64_t op2, size_t vl);
vint64m4_t __riscv_vand_vv_i64m4 (vint64m4_t op1, vint64m4_t op2, size_t vl);
vint64m4_t __riscv_vand_vx_i64m4 (vint64m4_t op1, int64_t op2, size_t vl);
vint64m8_t __riscv_vand_vv_i64m8 (vint64m8_t op1, vint64m8_t op2, size_t vl);
vint64m8_t __riscv_vand_vx_i64m8 (vint64m8_t op1, int64_t op2, size_t vl);
vuint8mf8_t __riscv_vand_vv_u8mf8 (vuint8mf8_t op1, vuint8mf8_t op2, size_t vl);
vuint8mf8_t __riscv_vand_vx_u8mf8 (vuint8mf8_t op1, uint8_t op2, size_t vl);
vuint8mf4_t __riscv_vand_vv_u8mf4 (vuint8mf4_t op1, vuint8mf4_t op2, size_t vl);
vuint8mf4_t __riscv_vand_vx_u8mf4 (vuint8mf4_t op1, uint8_t op2, size_t vl);
vuint8mf2_t __riscv_vand_vv_u8mf2 (vuint8mf2_t op1, vuint8mf2_t op2, size_t vl);
vuint8mf2_t __riscv_vand_vx_u8mf2 (vuint8mf2_t op1, uint8_t op2, size_t vl);
vuint8m1_t __riscv_vand_vv_u8m1 (vuint8m1_t op1, vuint8m1_t op2, size_t vl);
vuint8m1_t __riscv_vand_vx_u8m1 (vuint8m1_t op1, uint8_t op2, size_t vl);
vuint8m2_t __riscv_vand_vv_u8m2 (vuint8m2_t op1, vuint8m2_t op2, size_t vl);
vuint8m2_t __riscv_vand_vx_u8m2 (vuint8m2_t op1, uint8_t op2, size_t vl);
vuint8m4_t __riscv_vand_vv_u8m4 (vuint8m4_t op1, vuint8m4_t op2, size_t vl);
vuint8m4_t __riscv_vand_vx_u8m4 (vuint8m4_t op1, uint8_t op2, size_t vl);
vuint8m8_t __riscv_vand_vv_u8m8 (vuint8m8_t op1, vuint8m8_t op2, size_t vl);
vuint8m8_t __riscv_vand_vx_u8m8 (vuint8m8_t op1, uint8_t op2, size_t vl);
vuint16mf4_t __riscv_vand_vv_u16mf4 (vuint16mf4_t op1, vuint16mf4_t op2, size_t vl);
vuint16mf4_t __riscv_vand_vx_u16mf4 (vuint16mf4_t op1, uint16_t op2, size_t vl);
vuint16mf2_t __riscv_vand_vv_u16mf2 (vuint16mf2_t op1, vuint16mf2_t op2, size_t vl);
vuint16mf2_t __riscv_vand_vx_u16mf2 (vuint16mf2_t op1, uint16_t op2, size_t vl);
vuint16m1_t __riscv_vand_vv_u16m1 (vuint16m1_t op1, vuint16m1_t op2, size_t vl);
vuint16m1_t __riscv_vand_vx_u16m1 (vuint16m1_t op1, uint16_t op2, size_t vl);
vuint16m2_t __riscv_vand_vv_u16m2 (vuint16m2_t op1, vuint16m2_t op2, size_t vl);
vuint16m2_t __riscv_vand_vx_u16m2 (vuint16m2_t op1, uint16_t op2, size_t vl);
vuint16m4_t __riscv_vand_vv_u16m4 (vuint16m4_t op1, vuint16m4_t op2, size_t vl);
vuint16m4_t __riscv_vand_vx_u16m4 (vuint16m4_t op1, uint16_t op2, size_t vl);
vuint16m8_t __riscv_vand_vv_u16m8 (vuint16m8_t op1, vuint16m8_t op2, size_t vl);
vuint16m8_t __riscv_vand_vx_u16m8 (vuint16m8_t op1, uint16_t op2, size_t vl);
vuint32mf2_t __riscv_vand_vv_u32mf2 (vuint32mf2_t op1, vuint32mf2_t op2, size_t vl);
vuint32mf2_t __riscv_vand_vx_u32mf2 (vuint32mf2_t op1, uint32_t op2, size_t vl);
vuint32m1_t __riscv_vand_vv_u32m1 (vuint32m1_t op1, vuint32m1_t op2, size_t vl);
vuint32m1_t __riscv_vand_vx_u32m1 (vuint32m1_t op1, uint32_t op2, size_t vl);
vuint32m2_t __riscv_vand_vv_u32m2 (vuint32m2_t op1, vuint32m2_t op2, size_t vl);
vuint32m2_t __riscv_vand_vx_u32m2 (vuint32m2_t op1, uint32_t op2, size_t vl);
vuint32m4_t __riscv_vand_vv_u32m4 (vuint32m4_t op1, vuint32m4_t op2, size_t vl);
vuint32m4_t __riscv_vand_vx_u32m4 (vuint32m4_t op1, uint32_t op2, size_t vl);
vuint32m8_t __riscv_vand_vv_u32m8 (vuint32m8_t op1, vuint32m8_t op2, size_t vl);
vuint32m8_t __riscv_vand_vx_u32m8 (vuint32m8_t op1, uint32_t op2, size_t vl);
vuint64m1_t __riscv_vand_vv_u64m1 (vuint64m1_t op1, vuint64m1_t op2, size_t vl);
vuint64m1_t __riscv_vand_vx_u64m1 (vuint64m1_t op1, uint64_t op2, size_t vl);
vuint64m2_t __riscv_vand_vv_u64m2 (vuint64m2_t op1, vuint64m2_t op2, size_t vl);
vuint64m2_t __riscv_vand_vx_u64m2 (vuint64m2_t op1, uint64_t op2, size_t vl);
vuint64m4_t __riscv_vand_vv_u64m4 (vuint64m4_t op1, vuint64m4_t op2, size_t vl);
vuint64m4_t __riscv_vand_vx_u64m4 (vuint64m4_t op1, uint64_t op2, size_t vl);
vuint64m8_t __riscv_vand_vv_u64m8 (vuint64m8_t op1, vuint64m8_t op2, size_t vl);
vuint64m8_t __riscv_vand_vx_u64m8 (vuint64m8_t op1, uint64_t op2, size_t vl);
vint8mf8_t __riscv_vand_vv_i8mf8_m (vbool64_t mask, vint8mf8_t op1, vint8mf8_t op2, size_t vl);
vint8mf8_t __riscv_vand_vx_i8mf8_m (vbool64_t mask, vint8mf8_t op1, int8_t op2, size_t vl);
vint8mf4_t __riscv_vand_vv_i8mf4_m (vbool32_t mask, vint8mf4_t op1, vint8mf4_t op2, size_t vl);
vint8mf4_t __riscv_vand_vx_i8mf4_m (vbool32_t mask, vint8mf4_t op1, int8_t op2, size_t vl);
vint8mf2_t __riscv_vand_vv_i8mf2_m (vbool16_t mask, vint8mf2_t op1, vint8mf2_t op2, size_t vl);
vint8mf2_t __riscv_vand_vx_i8mf2_m (vbool16_t mask, vint8mf2_t op1, int8_t op2, size_t vl);
vint8m1_t __riscv_vand_vv_i8m1_m (vbool8_t mask, vint8m1_t op1, vint8m1_t op2, size_t vl);
vint8m1_t __riscv_vand_vx_i8m1_m (vbool8_t mask, vint8m1_t op1, int8_t op2, size_t vl);
vint8m2_t __riscv_vand_vv_i8m2_m (vbool4_t mask, vint8m2_t op1, vint8m2_t op2, size_t vl);
vint8m2_t __riscv_vand_vx_i8m2_m (vbool4_t mask, vint8m2_t op1, int8_t op2, size_t vl);
vint8m4_t __riscv_vand_vv_i8m4_m (vbool2_t mask, vint8m4_t op1, vint8m4_t op2, size_t vl);
vint8m4_t __riscv_vand_vx_i8m4_m (vbool2_t mask, vint8m4_t op1, int8_t op2, size_t vl);
vint8m8_t __riscv_vand_vv_i8m8_m (vbool1_t mask, vint8m8_t op1, vint8m8_t op2, size_t vl);
vint8m8_t __riscv_vand_vx_i8m8_m (vbool1_t mask, vint8m8_t op1, int8_t op2, size_t vl);
vint16mf4_t __riscv_vand_vv_i16mf4_m (vbool64_t mask, vint16mf4_t op1, vint16mf4_t op2, size_t vl);
vint16mf4_t __riscv_vand_vx_i16mf4_m (vbool64_t mask, vint16mf4_t op1, int16_t op2, size_t vl);
vint16mf2_t __riscv_vand_vv_i16mf2_m (vbool32_t mask, vint16mf2_t op1, vint16mf2_t op2, size_t vl);
vint16mf2_t __riscv_vand_vx_i16mf2_m (vbool32_t mask, vint16mf2_t op1, int16_t op2, size_t vl);
vint16m1_t __riscv_vand_vv_i16m1_m (vbool16_t mask, vint16m1_t op1, vint16m1_t op2, size_t vl);
vint16m1_t __riscv_vand_vx_i16m1_m (vbool16_t mask, vint16m1_t op1, int16_t op2, size_t vl);
vint16m2_t __riscv_vand_vv_i16m2_m (vbool8_t mask, vint16m2_t op1, vint16m2_t op2, size_t vl);
vint16m2_t __riscv_vand_vx_i16m2_m (vbool8_t mask, vint16m2_t op1, int16_t op2, size_t vl);
vint16m4_t __riscv_vand_vv_i16m4_m (vbool4_t mask, vint16m4_t op1, vint16m4_t op2, size_t vl);
vint16m4_t __riscv_vand_vx_i16m4_m (vbool4_t mask, vint16m4_t op1, int16_t op2, size_t vl);
vint16m8_t __riscv_vand_vv_i16m8_m (vbool2_t mask, vint16m8_t op1, vint16m8_t op2, size_t vl);
vint16m8_t __riscv_vand_vx_i16m8_m (vbool2_t mask, vint16m8_t op1, int16_t op2, size_t vl);
vint32mf2_t __riscv_vand_vv_i32mf2_m (vbool64_t mask, vint32mf2_t op1, vint32mf2_t op2, size_t vl);
vint32mf2_t __riscv_vand_vx_i32mf2_m (vbool64_t mask, vint32mf2_t op1, int32_t op2, size_t vl);
vint32m1_t __riscv_vand_vv_i32m1_m (vbool32_t mask, vint32m1_t op1, vint32m1_t op2, size_t vl);
vint32m1_t __riscv_vand_vx_i32m1_m (vbool32_t mask, vint32m1_t op1, int32_t op2, size_t vl);
vint32m2_t __riscv_vand_vv_i32m2_m (vbool16_t mask, vint32m2_t op1, vint32m2_t op2, size_t vl);
vint32m2_t __riscv_vand_vx_i32m2_m (vbool16_t mask, vint32m2_t op1, int32_t op2, size_t vl);
vint32m4_t __riscv_vand_vv_i32m4_m (vbool8_t mask, vint32m4_t op1, vint32m4_t op2, size_t vl);
vint32m4_t __riscv_vand_vx_i32m4_m (vbool8_t mask, vint32m4_t op1, int32_t op2, size_t vl);
vint32m8_t __riscv_vand_vv_i32m8_m (vbool4_t mask, vint32m8_t op1, vint32m8_t op2, size_t vl);
vint32m8_t __riscv_vand_vx_i32m8_m (vbool4_t mask, vint32m8_t op1, int32_t op2, size_t vl);
vint64m1_t __riscv_vand_vv_i64m1_m (vbool64_t mask, vint64m1_t op1, vint64m1_t op2, size_t vl);
vint64m1_t __riscv_vand_vx_i64m1_m (vbool64_t mask, vint64m1_t op1, int64_t op2, size_t vl);
vint64m2_t __riscv_vand_vv_i64m2_m (vbool32_t mask, vint64m2_t op1, vint64m2_t op2, size_t vl);
vint64m2_t __riscv_vand_vx_i64m2_m (vbool32_t mask, vint64m2_t op1, int64_t op2, size_t vl);
vint64m4_t __riscv_vand_vv_i64m4_m (vbool16_t mask, vint64m4_t op1, vint64m4_t op2, size_t vl);
vint64m4_t __riscv_vand_vx_i64m4_m (vbool16_t mask, vint64m4_t op1, int64_t op2, size_t vl);
vint64m8_t __riscv_vand_vv_i64m8_m (vbool8_t mask, vint64m8_t op1, vint64m8_t op2, size_t vl);
vint64m8_t __riscv_vand_vx_i64m8_m (vbool8_t mask, vint64m8_t op1, int64_t op2, size_t vl);
vuint8mf8_t __riscv_vand_vv_u8mf8_m (vbool64_t mask, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl);
vuint8mf8_t __riscv_vand_vx_u8mf8_m (vbool64_t mask, vuint8mf8_t op1, uint8_t op2, size_t vl);
vuint8mf4_t __riscv_vand_vv_u8mf4_m (vbool32_t mask, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl);
vuint8mf4_t __riscv_vand_vx_u8mf4_m (vbool32_t mask, vuint8mf4_t op1, uint8_t op2, size_t vl);
vuint8mf2_t __riscv_vand_vv_u8mf2_m (vbool16_t mask, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl);
vuint8mf2_t __riscv_vand_vx_u8mf2_m (vbool16_t mask, vuint8mf2_t op1, uint8_t op2, size_t vl);
vuint8m1_t __riscv_vand_vv_u8m1_m (vbool8_t mask, vuint8m1_t op1, vuint8m1_t op2, size_t vl);
vuint8m1_t __riscv_vand_vx_u8m1_m (vbool8_t mask, vuint8m1_t op1, uint8_t op2, size_t vl);
vuint8m2_t __riscv_vand_vv_u8m2_m (vbool4_t mask, vuint8m2_t op1, vuint8m2_t op2, size_t vl);
vuint8m2_t __riscv_vand_vx_u8m2_m (vbool4_t mask, vuint8m2_t op1, uint8_t op2, size_t vl);
vuint8m4_t __riscv_vand_vv_u8m4_m (vbool2_t mask, vuint8m4_t op1, vuint8m4_t op2, size_t vl);
vuint8m4_t __riscv_vand_vx_u8m4_m (vbool2_t mask, vuint8m4_t op1, uint8_t op2, size_t vl);
vuint8m8_t __riscv_vand_vv_u8m8_m (vbool1_t mask, vuint8m8_t op1, vuint8m8_t op2, size_t vl);
vuint8m8_t __riscv_vand_vx_u8m8_m (vbool1_t mask, vuint8m8_t op1, uint8_t op2, size_t vl);
vuint16mf4_t __riscv_vand_vv_u16mf4_m (vbool64_t mask, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl);
vuint16mf4_t __riscv_vand_vx_u16mf4_m (vbool64_t mask, vuint16mf4_t op1, uint16_t op2, size_t vl);
vuint16mf2_t __riscv_vand_vv_u16mf2_m (vbool32_t mask, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl);
vuint16mf2_t __riscv_vand_vx_u16mf2_m (vbool32_t mask, vuint16mf2_t op1, uint16_t op2, size_t vl);
vuint16m1_t __riscv_vand_vv_u16m1_m (vbool16_t mask, vuint16m1_t op1, vuint16m1_t op2, size_t vl);
vuint16m1_t __riscv_vand_vx_u16m1_m (vbool16_t mask, vuint16m1_t op1, uint16_t op2, size_t vl);
vuint16m2_t __riscv_vand_vv_u16m2_m (vbool8_t mask, vuint16m2_t op1, vuint16m2_t op2, size_t vl);
vuint16m2_t __riscv_vand_vx_u16m2_m (vbool8_t mask, vuint16m2_t op1, uint16_t op2, size_t vl);
vuint16m4_t __riscv_vand_vv_u16m4_m (vbool4_t mask, vuint16m4_t op1, vuint16m4_t op2, size_t vl);
vuint16m4_t __riscv_vand_vx_u16m4_m (vbool4_t mask, vuint16m4_t op1, uint16_t op2, size_t vl);
vuint16m8_t __riscv_vand_vv_u16m8_m (vbool2_t mask, vuint16m8_t op1, vuint16m8_t op2, size_t vl);
vuint16m8_t __riscv_vand_vx_u16m8_m (vbool2_t mask, vuint16m8_t op1, uint16_t op2, size_t vl);
vuint32mf2_t __riscv_vand_vv_u32mf2_m (vbool64_t mask, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl);
vuint32mf2_t __riscv_vand_vx_u32mf2_m (vbool64_t mask, vuint32mf2_t op1, uint32_t op2, size_t vl);
vuint32m1_t __riscv_vand_vv_u32m1_m (vbool32_t mask, vuint32m1_t op1, vuint32m1_t op2, size_t vl);
vuint32m1_t __riscv_vand_vx_u32m1_m (vbool32_t mask, vuint32m1_t op1, uint32_t op2, size_t vl);
vuint32m2_t __riscv_vand_vv_u32m2_m (vbool16_t mask, vuint32m2_t op1, vuint32m2_t op2, size_t vl);
vuint32m2_t __riscv_vand_vx_u32m2_m (vbool16_t mask, vuint32m2_t op1, uint32_t op2, size_t vl);
vuint32m4_t __riscv_vand_vv_u32m4_m (vbool8_t mask, vuint32m4_t op1, vuint32m4_t op2, size_t vl);
vuint32m4_t __riscv_vand_vx_u32m4_m (vbool8_t mask, vuint32m4_t op1, uint32_t op2, size_t vl);
vuint32m8_t __riscv_vand_vv_u32m8_m (vbool4_t mask, vuint32m8_t op1, vuint32m8_t op2, size_t vl);
vuint32m8_t __riscv_vand_vx_u32m8_m (vbool4_t mask, vuint32m8_t op1, uint32_t op2, size_t vl);
vuint64m1_t __riscv_vand_vv_u64m1_m (vbool64_t mask, vuint64m1_t op1, vuint64m1_t op2, size_t vl);
vuint64m1_t __riscv_vand_vx_u64m1_m (vbool64_t mask, vuint64m1_t op1, uint64_t op2, size_t vl);
vuint64m2_t __riscv_vand_vv_u64m2_m (vbool32_t mask, vuint64m2_t op1, vuint64m2_t op2, size_t vl);
vuint64m2_t __riscv_vand_vx_u64m2_m (vbool32_t mask, vuint64m2_t op1, uint64_t op2, size_t vl);
vuint64m4_t __riscv_vand_vv_u64m4_m (vbool16_t mask, vuint64m4_t op1, vuint64m4_t op2, size_t vl);
vuint64m4_t __riscv_vand_vx_u64m4_m (vbool16_t mask, vuint64m4_t op1, uint64_t op2, size_t vl);
vuint64m8_t __riscv_vand_vv_u64m8_m (vbool8_t mask, vuint64m8_t op1, vuint64m8_t op2, size_t vl);
vuint64m8_t __riscv_vand_vx_u64m8_m (vbool8_t mask, vuint64m8_t op1, uint64_t op2, size_t vl);
[[vector-single-width-saturating-add-and-subtract]]
=== Vector Single-Width Saturating Add and Subtract Intrinsics
[[vector-single-width-averaging-add-and-subtract]]
=== Vector Single-Width Averaging Add and Subtract Intrinsics
[[vector-single-width-fractional-multiply-with-rounding-and-saturation]]
=== Vector Single-Width Fractional Multiply with Rounding and SaturationIntrinsics
vint8m1_t __riscv_vredand_vs_i8mf8_i8m1 (vint8mf8_t vector, vint8m1_t scalar, size_t vl);
vint8m1_t __riscv_vredand_vs_i8mf4_i8m1 (vint8mf4_t vector, vint8m1_t scalar, size_t vl);
vint8m1_t __riscv_vredand_vs_i8mf2_i8m1 (vint8mf2_t vector, vint8m1_t scalar, size_t vl);
vint8m1_t __riscv_vredand_vs_i8m1_i8m1 (vint8m1_t vector, vint8m1_t scalar, size_t vl);
vint8m1_t __riscv_vredand_vs_i8m2_i8m1 (vint8m2_t vector, vint8m1_t scalar, size_t vl);
vint8m1_t __riscv_vredand_vs_i8m4_i8m1 (vint8m4_t vector, vint8m1_t scalar, size_t vl);
vint8m1_t __riscv_vredand_vs_i8m8_i8m1 (vint8m8_t vector, vint8m1_t scalar, size_t vl);
vint16m1_t __riscv_vredand_vs_i16mf4_i16m1 (vint16mf4_t vector, vint16m1_t scalar, size_t vl);
vint16m1_t __riscv_vredand_vs_i16mf2_i16m1 (vint16mf2_t vector, vint16m1_t scalar, size_t vl);
vint16m1_t __riscv_vredand_vs_i16m1_i16m1 (vint16m1_t vector, vint16m1_t scalar, size_t vl);
vint16m1_t __riscv_vredand_vs_i16m2_i16m1 (vint16m2_t vector, vint16m1_t scalar, size_t vl);
vint16m1_t __riscv_vredand_vs_i16m4_i16m1 (vint16m4_t vector, vint16m1_t scalar, size_t vl);
vint16m1_t __riscv_vredand_vs_i16m8_i16m1 (vint16m8_t vector, vint16m1_t scalar, size_t vl);
vint32m1_t __riscv_vredand_vs_i32mf2_i32m1 (vint32mf2_t vector, vint32m1_t scalar, size_t vl);
vint32m1_t __riscv_vredand_vs_i32m1_i32m1 (vint32m1_t vector, vint32m1_t scalar, size_t vl);
vint32m1_t __riscv_vredand_vs_i32m2_i32m1 (vint32m2_t vector, vint32m1_t scalar, size_t vl);
vint32m1_t __riscv_vredand_vs_i32m4_i32m1 (vint32m4_t vector, vint32m1_t scalar, size_t vl);
vint32m1_t __riscv_vredand_vs_i32m8_i32m1 (vint32m8_t vector, vint32m1_t scalar, size_t vl);
vint64m1_t __riscv_vredand_vs_i64m1_i64m1 (vint64m1_t vector, vint64m1_t scalar, size_t vl);
vint64m1_t __riscv_vredand_vs_i64m2_i64m1 (vint64m2_t vector, vint64m1_t scalar, size_t vl);
vint64m1_t __riscv_vredand_vs_i64m4_i64m1 (vint64m4_t vector, vint64m1_t scalar, size_t vl);
vint64m1_t __riscv_vredand_vs_i64m8_i64m1 (vint64m8_t vector, vint64m1_t scalar, size_t vl);
vuint8m1_t __riscv_vredand_vs_u8mf8_u8m1 (vuint8mf8_t vector, vuint8m1_t scalar, size_t vl);
vuint8m1_t __riscv_vredand_vs_u8mf4_u8m1 (vuint8mf4_t vector, vuint8m1_t scalar, size_t vl);
vuint8m1_t __riscv_vredand_vs_u8mf2_u8m1 (vuint8mf2_t vector, vuint8m1_t scalar, size_t vl);
vuint8m1_t __riscv_vredand_vs_u8m1_u8m1 (vuint8m1_t vector, vuint8m1_t scalar, size_t vl);
vuint8m1_t __riscv_vredand_vs_u8m2_u8m1 (vuint8m2_t vector, vuint8m1_t scalar, size_t vl);
vuint8m1_t __riscv_vredand_vs_u8m4_u8m1 (vuint8m4_t vector, vuint8m1_t scalar, size_t vl);
vuint8m1_t __riscv_vredand_vs_u8m8_u8m1 (vuint8m8_t vector, vuint8m1_t scalar, size_t vl);
vuint16m1_t __riscv_vredand_vs_u16mf4_u16m1 (vuint16mf4_t vector, vuint16m1_t scalar, size_t vl);
vuint16m1_t __riscv_vredand_vs_u16mf2_u16m1 (vuint16mf2_t vector, vuint16m1_t scalar, size_t vl);
vuint16m1_t __riscv_vredand_vs_u16m1_u16m1 (vuint16m1_t vector, vuint16m1_t scalar, size_t vl);
vuint16m1_t __riscv_vredand_vs_u16m2_u16m1 (vuint16m2_t vector, vuint16m1_t scalar, size_t vl);
vuint16m1_t __riscv_vredand_vs_u16m4_u16m1 (vuint16m4_t vector, vuint16m1_t scalar, size_t vl);
vuint16m1_t __riscv_vredand_vs_u16m8_u16m1 (vuint16m8_t vector, vuint16m1_t scalar, size_t vl);
vuint32m1_t __riscv_vredand_vs_u32mf2_u32m1 (vuint32mf2_t vector, vuint32m1_t scalar, size_t vl);
vuint32m1_t __riscv_vredand_vs_u32m1_u32m1 (vuint32m1_t vector, vuint32m1_t scalar, size_t vl);
vuint32m1_t __riscv_vredand_vs_u32m2_u32m1 (vuint32m2_t vector, vuint32m1_t scalar, size_t vl);
vuint32m1_t __riscv_vredand_vs_u32m4_u32m1 (vuint32m4_t vector, vuint32m1_t scalar, size_t vl);
vuint32m1_t __riscv_vredand_vs_u32m8_u32m1 (vuint32m8_t vector, vuint32m1_t scalar, size_t vl);
vuint64m1_t __riscv_vredand_vs_u64m1_u64m1 (vuint64m1_t vector, vuint64m1_t scalar, size_t vl);
vuint64m1_t __riscv_vredand_vs_u64m2_u64m1 (vuint64m2_t vector, vuint64m1_t scalar, size_t vl);
vuint64m1_t __riscv_vredand_vs_u64m4_u64m1 (vuint64m4_t vector, vuint64m1_t scalar, size_t vl);
vuint64m1_t __riscv_vredand_vs_u64m8_u64m1 (vuint64m8_t vector, vuint64m1_t scalar, size_t vl);
vint8m1_t __riscv_vredand_vs_i8mf8_i8m1_m (vbool64_t mask, vint8mf8_t vector, vint8m1_t scalar, size_t vl);
vint8m1_t __riscv_vredand_vs_i8mf4_i8m1_m (vbool32_t mask, vint8mf4_t vector, vint8m1_t scalar, size_t vl);
vint8m1_t __riscv_vredand_vs_i8mf2_i8m1_m (vbool16_t mask, vint8mf2_t vector, vint8m1_t scalar, size_t vl);
vint8m1_t __riscv_vredand_vs_i8m1_i8m1_m (vbool8_t mask, vint8m1_t vector, vint8m1_t scalar, size_t vl);
vint8m1_t __riscv_vredand_vs_i8m2_i8m1_m (vbool4_t mask, vint8m2_t vector, vint8m1_t scalar, size_t vl);
vint8m1_t __riscv_vredand_vs_i8m4_i8m1_m (vbool2_t mask, vint8m4_t vector, vint8m1_t scalar, size_t vl);
vint8m1_t __riscv_vredand_vs_i8m8_i8m1_m (vbool1_t mask, vint8m8_t vector, vint8m1_t scalar, size_t vl);
vint16m1_t __riscv_vredand_vs_i16mf4_i16m1_m (vbool64_t mask, vint16mf4_t vector, vint16m1_t scalar, size_t vl);
vint16m1_t __riscv_vredand_vs_i16mf2_i16m1_m (vbool32_t mask, vint16mf2_t vector, vint16m1_t scalar, size_t vl);
vint16m1_t __riscv_vredand_vs_i16m1_i16m1_m (vbool16_t mask, vint16m1_t vector, vint16m1_t scalar, size_t vl);
vint16m1_t __riscv_vredand_vs_i16m2_i16m1_m (vbool8_t mask, vint16m2_t vector, vint16m1_t scalar, size_t vl);
vint16m1_t __riscv_vredand_vs_i16m4_i16m1_m (vbool4_t mask, vint16m4_t vector, vint16m1_t scalar, size_t vl);
vint16m1_t __riscv_vredand_vs_i16m8_i16m1_m (vbool2_t mask, vint16m8_t vector, vint16m1_t scalar, size_t vl);
vint32m1_t __riscv_vredand_vs_i32mf2_i32m1_m (vbool64_t mask, vint32mf2_t vector, vint32m1_t scalar, size_t vl);
vint32m1_t __riscv_vredand_vs_i32m1_i32m1_m (vbool32_t mask, vint32m1_t vector, vint32m1_t scalar, size_t vl);
vint32m1_t __riscv_vredand_vs_i32m2_i32m1_m (vbool16_t mask, vint32m2_t vector, vint32m1_t scalar, size_t vl);
vint32m1_t __riscv_vredand_vs_i32m4_i32m1_m (vbool8_t mask, vint32m4_t vector, vint32m1_t scalar, size_t vl);
vint32m1_t __riscv_vredand_vs_i32m8_i32m1_m (vbool4_t mask, vint32m8_t vector, vint32m1_t scalar, size_t vl);
vint64m1_t __riscv_vredand_vs_i64m1_i64m1_m (vbool64_t mask, vint64m1_t vector, vint64m1_t scalar, size_t vl);
vint64m1_t __riscv_vredand_vs_i64m2_i64m1_m (vbool32_t mask, vint64m2_t vector, vint64m1_t scalar, size_t vl);
vint64m1_t __riscv_vredand_vs_i64m4_i64m1_m (vbool16_t mask, vint64m4_t vector, vint64m1_t scalar, size_t vl);
vint64m1_t __riscv_vredand_vs_i64m8_i64m1_m (vbool8_t mask, vint64m8_t vector, vint64m1_t scalar, size_t vl);
vuint8m1_t __riscv_vredand_vs_u8mf8_u8m1_m (vbool64_t mask, vuint8mf8_t vector, vuint8m1_t scalar, size_t vl);
vuint8m1_t __riscv_vredand_vs_u8mf4_u8m1_m (vbool32_t mask, vuint8mf4_t vector, vuint8m1_t scalar, size_t vl);
vuint8m1_t __riscv_vredand_vs_u8mf2_u8m1_m (vbool16_t mask, vuint8mf2_t vector, vuint8m1_t scalar, size_t vl);
vuint8m1_t __riscv_vredand_vs_u8m1_u8m1_m (vbool8_t mask, vuint8m1_t vector, vuint8m1_t scalar, size_t vl);
vuint8m1_t __riscv_vredand_vs_u8m2_u8m1_m (vbool4_t mask, vuint8m2_t vector, vuint8m1_t scalar, size_t vl);
vuint8m1_t __riscv_vredand_vs_u8m4_u8m1_m (vbool2_t mask, vuint8m4_t vector, vuint8m1_t scalar, size_t vl);
vuint8m1_t __riscv_vredand_vs_u8m8_u8m1_m (vbool1_t mask, vuint8m8_t vector, vuint8m1_t scalar, size_t vl);
vuint16m1_t __riscv_vredand_vs_u16mf4_u16m1_m (vbool64_t mask, vuint16mf4_t vector, vuint16m1_t scalar, size_t vl);
vuint16m1_t __riscv_vredand_vs_u16mf2_u16m1_m (vbool32_t mask, vuint16mf2_t vector, vuint16m1_t scalar, size_t vl);
vuint16m1_t __riscv_vredand_vs_u16m1_u16m1_m (vbool16_t mask, vuint16m1_t vector, vuint16m1_t scalar, size_t vl);
vuint16m1_t __riscv_vredand_vs_u16m2_u16m1_m (vbool8_t mask, vuint16m2_t vector, vuint16m1_t scalar, size_t vl);
vuint16m1_t __riscv_vredand_vs_u16m4_u16m1_m (vbool4_t mask, vuint16m4_t vector, vuint16m1_t scalar, size_t vl);
vuint16m1_t __riscv_vredand_vs_u16m8_u16m1_m (vbool2_t mask, vuint16m8_t vector, vuint16m1_t scalar, size_t vl);
vuint32m1_t __riscv_vredand_vs_u32mf2_u32m1_m (vbool64_t mask, vuint32mf2_t vector, vuint32m1_t scalar, size_t vl);
vuint32m1_t __riscv_vredand_vs_u32m1_u32m1_m (vbool32_t mask, vuint32m1_t vector, vuint32m1_t scalar, size_t vl);
vuint32m1_t __riscv_vredand_vs_u32m2_u32m1_m (vbool16_t mask, vuint32m2_t vector, vuint32m1_t scalar, size_t vl);
vuint32m1_t __riscv_vredand_vs_u32m4_u32m1_m (vbool8_t mask, vuint32m4_t vector, vuint32m1_t scalar, size_t vl);
vuint32m1_t __riscv_vredand_vs_u32m8_u32m1_m (vbool4_t mask, vuint32m8_t vector, vuint32m1_t scalar, size_t vl);
vuint64m1_t __riscv_vredand_vs_u64m1_u64m1_m (vbool64_t mask, vuint64m1_t vector, vuint64m1_t scalar, size_t vl);
vuint64m1_t __riscv_vredand_vs_u64m2_u64m1_m (vbool32_t mask, vuint64m2_t vector, vuint64m1_t scalar, size_t vl);
vuint64m1_t __riscv_vredand_vs_u64m4_u64m1_m (vbool16_t mask, vuint64m4_t vector, vuint64m1_t scalar, size_t vl);
vuint64m1_t __riscv_vredand_vs_u64m8_u64m1_m (vbool8_t mask, vuint64m8_t vector, vuint64m1_t scalar, size_t vl);
vbool1_t __riscv_vmand_mm_b1 (vbool1_t op1, vbool1_t op2, size_t vl);
vbool2_t __riscv_vmand_mm_b2 (vbool2_t op1, vbool2_t op2, size_t vl);
vbool4_t __riscv_vmand_mm_b4 (vbool4_t op1, vbool4_t op2, size_t vl);
vbool8_t __riscv_vmand_mm_b8 (vbool8_t op1, vbool8_t op2, size_t vl);
vbool16_t __riscv_vmand_mm_b16 (vbool16_t op1, vbool16_t op2, size_t vl);
vbool32_t __riscv_vmand_mm_b32 (vbool32_t op1, vbool32_t op2, size_t vl);
vbool64_t __riscv_vmand_mm_b64 (vbool64_t op1, vbool64_t op2, size_t vl);
vbool1_t __riscv_vmnand_mm_b1 (vbool1_t op1, vbool1_t op2, size_t vl);
vbool2_t __riscv_vmnand_mm_b2 (vbool2_t op1, vbool2_t op2, size_t vl);
vbool4_t __riscv_vmnand_mm_b4 (vbool4_t op1, vbool4_t op2, size_t vl);
vbool8_t __riscv_vmnand_mm_b8 (vbool8_t op1, vbool8_t op2, size_t vl);
vbool16_t __riscv_vmnand_mm_b16 (vbool16_t op1, vbool16_t op2, size_t vl);
vbool32_t __riscv_vmnand_mm_b32 (vbool32_t op1, vbool32_t op2, size_t vl);
vbool64_t __riscv_vmnand_mm_b64 (vbool64_t op1, vbool64_t op2, size_t vl);
vbool1_t __riscv_vmandn_mm_b1 (vbool1_t op1, vbool1_t op2, size_t vl);
vbool2_t __riscv_vmandn_mm_b2 (vbool2_t op1, vbool2_t op2, size_t vl);
vbool4_t __riscv_vmandn_mm_b4 (vbool4_t op1, vbool4_t op2, size_t vl);
vbool8_t __riscv_vmandn_mm_b8 (vbool8_t op1, vbool8_t op2, size_t vl);
vbool16_t __riscv_vmandn_mm_b16 (vbool16_t op1, vbool16_t op2, size_t vl);
vbool32_t __riscv_vmandn_mm_b32 (vbool32_t op1, vbool32_t op2, size_t vl);
vbool64_t __riscv_vmandn_mm_b64 (vbool64_t op1, vbool64_t op2, size_t vl);
=== Integer and Floating-Point Scalar Move Intrinsics
[[vector-slide1up-and-slide1down]]
=== Vector Slide1up and Slide1down Intrinsics
[[set-vl-and-vtype]]
// Reinterpret between vector boolean types and LMUL=1 (m1) vector integer types
