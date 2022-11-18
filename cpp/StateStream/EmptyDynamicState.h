// Object: EmptyDynamicState
// RuntimeId: 59600
// TypeInfo: 0x0000000144F52BA0
#pragma pack(push, 1)
namespace StateStream {
    struct EmptyDynamicState {
        char pad_0x0[0x1];
    }; // 0x1
    static_assert(sizeof(EmptyDynamicState) == 0x1);
}
#pragma pack(pop)