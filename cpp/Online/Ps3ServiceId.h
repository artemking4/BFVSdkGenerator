// Object: Ps3ServiceId
// RuntimeId: 11149
// TypeInfo: 0x0000000144F029F0
#pragma pack(push, 8)
namespace Online {
    struct Ps3ServiceId {
        char pad_0x0[0x10];
    }; // 0x10
    static_assert(sizeof(Ps3ServiceId) == 0x10);
}
#pragma pack(pop)