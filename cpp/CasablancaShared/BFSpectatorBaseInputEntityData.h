// Object: BFSpectatorBaseInputEntityData
// ClassId: 2125
// RuntimeId: 41985
// TypeInfo: 0x0000000144D42CD0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUISpectatorCameraObject.h"
#include "../Global/Boolean.h"

namespace CasablancaShared {
    class BFSpectatorBaseInputEntityData : public Entity::EntityData {
        CasablancaShared::BFUISpectatorCameraObject SpectatorCamera; // 0x20
        Boolean SpectatorCameraCanUseInput; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(BFSpectatorBaseInputEntityData) == 0x30);
}