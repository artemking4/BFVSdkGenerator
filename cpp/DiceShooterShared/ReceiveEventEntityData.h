// Object: ReceiveEventEntityData
// ClassId: 3107
// RuntimeId: 15600
// TypeInfo: 0x0000000144DECDA0
#include "../DiceShooterShared/RemoteEventEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class ReceiveEventEntityData : public DiceShooterShared::RemoteEventEntityData {
        Boolean Dummy; // 0x58
        char pad_0x59[0x7];
    }; // 0x60
    static_assert(sizeof(ReceiveEventEntityData) == 0x60);
}
#pragma pack(pop)