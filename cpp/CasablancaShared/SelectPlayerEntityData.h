// Object: SelectPlayerEntityData
// ClassId: 3151
// RuntimeId: 59186
// TypeInfo: 0x0000000144D4ADF0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/SelectPlayerMode.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/BFUIPlayerObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SelectPlayerEntityData : public Entity::EntityData {
        CasablancaShared::SelectPlayerMode SelectMode; // 0x20
        Float32 ChangePlayerDelay; // 0x24
        CasablancaShared::BFUIPlayerObject OwnPlayer; // 0x28
        Boolean ReselectOnInvalidControllable; // 0x30
        Boolean AllowSelectOwnPlayer; // 0x31
        Boolean AllowSelectDownedPlayers; // 0x32
        char pad_0x33[0x5];
    }; // 0x38
    static_assert(sizeof(SelectPlayerEntityData) == 0x38);
}
#pragma pack(pop)