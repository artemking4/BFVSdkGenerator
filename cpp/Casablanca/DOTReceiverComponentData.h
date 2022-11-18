// Object: DOTReceiverComponentData
// ClassId: 1750
// RuntimeId: 22474
// TypeInfo: 0x0000000144C7D400
#include "../Entity/GameComponentData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Casablanca {
    class DOTReceiverComponentData : public Entity::GameComponentData {
        Float32 InitialGasProtectionTime; // 0x80
        Boolean FireProtectionActive; // 0x84
        char pad_0x85[0xB];
    }; // 0x90
    static_assert(sizeof(DOTReceiverComponentData) == 0x90);
}
#pragma pack(pop)