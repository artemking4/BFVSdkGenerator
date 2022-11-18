// Object: SendEventEntityData
// ClassId: 3108
// RuntimeId: 31704
// TypeInfo: 0x0000000144DECE20
#include "../DiceShooterShared/RemoteEventEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class SendEventEntityData : public DiceShooterShared::RemoteEventEntityData {
        Boolean Dummy; // 0x58
        char pad_0x59[0x7];
    }; // 0x60
    static_assert(sizeof(SendEventEntityData) == 0x60);
}
#pragma pack(pop)