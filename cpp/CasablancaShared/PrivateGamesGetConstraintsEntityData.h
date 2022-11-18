// Object: PrivateGamesGetConstraintsEntityData
// ClassId: 3040
// RuntimeId: 6169
// TypeInfo: 0x0000000144D65AF0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/PrivateGamesBlueprint.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PrivateGamesGetConstraintsEntityData : public Entity::EntityData {
        CasablancaShared::PrivateGamesBlueprint Blueprint; // 0x20
    }; // 0x28
    static_assert(sizeof(PrivateGamesGetConstraintsEntityData) == 0x28);
}
#pragma pack(pop)