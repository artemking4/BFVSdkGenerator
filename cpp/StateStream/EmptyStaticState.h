// Object: EmptyStaticState
// RuntimeId: 16810
// TypeInfo: 0x0000000144F52BF0
#pragma pack(push, 1)
namespace StateStream {
    struct EmptyStaticState {
        char pad_0x0[0x1];
    }; // 0x1
    static_assert(sizeof(EmptyStaticState) == 0x1);
}
#pragma pack(pop)