// Object: ServerAdministrationPacketMessageBase
// RuntimeId: 53700
// TypeInfo: 0x0000000144E4A650
#pragma pack(push, 255)
namespace GameCommon {
    struct ServerAdministrationPacketMessageBase {
        char pad_0x0[0x40];
    }; // 0x40
    static_assert(sizeof(ServerAdministrationPacketMessageBase) == 0x40);
}
#pragma pack(pop)