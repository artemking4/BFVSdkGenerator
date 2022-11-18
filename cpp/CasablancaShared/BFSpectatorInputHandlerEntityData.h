// Object: BFSpectatorInputHandlerEntityData
// ClassId: 2130
// RuntimeId: 10264
// TypeInfo: 0x0000000144D42D50
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

namespace CasablancaShared {
    class BFSpectatorInputHandlerEntityData : public Entity::EntityData {
        Boolean Enabled; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(BFSpectatorInputHandlerEntityData) == 0x28);
}