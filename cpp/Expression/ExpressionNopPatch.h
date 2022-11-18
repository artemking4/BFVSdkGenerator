// Object: ExpressionNopPatch
// RuntimeId: 15007
// TypeInfo: 0x0000000144EE77A0
#pragma pack(push, 8)
namespace Expression {
    struct ExpressionNopPatch {
        char pad_0x0[0x10];
    }; // 0x10
    static_assert(sizeof(ExpressionNopPatch) == 0x10);
}
#pragma pack(pop)