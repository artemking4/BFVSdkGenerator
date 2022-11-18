// Object: BFUIPlayerSpectatorEntityData
// ClassId: 2341
// RuntimeId: 26025
// TypeInfo: 0x0000000144D42DD0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUISpectatorCameraObject.h"
#include "../CasablancaShared/BFUIPlayerObject.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIPlayerSpectatorEntityData : public Entity::EntityData {
        CasablancaShared::BFUISpectatorCameraObject CurrentCamera; // 0x20
        CasablancaShared::BFUIPlayerObject Player; // 0x28
        Boolean WaitForSpectatedPlayerToDeploy; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(BFUIPlayerSpectatorEntityData) == 0x38);
}
#pragma pack(pop)