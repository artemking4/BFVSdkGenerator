// Object: MaterialGridData
// ClassId: 555
// RuntimeId: 29398
// TypeInfo: 0x0000000144ED6320
#include "../Core/Asset.h"
#include "../Entity/MaterialDecl.h"
#include "../Global/Uint32.h"
#include "../Entity/MaterialRelationPropertyPair.h"
#include "../Entity/MaterialInteractionGridRow.h"

#pragma pack(push, 8)
namespace Entity {
    class MaterialGridData : public Core::Asset {
        Entity::MaterialDecl DefaultMaterial; // 0x20
        char pad_0x24[0x4];
        Array<Entity::MaterialDecl> MaterialPairs; // 0x28
        Array<Uint32> MaterialIndexMap; // 0x30
        Uint32 DefaultMaterialIndex; // 0x38
        char pad_0x3C[0x4];
        Array<Entity::MaterialRelationPropertyPair> MaterialProperties; // 0x40
        Array<Entity::MaterialInteractionGridRow> InteractionGrid; // 0x48
    }; // 0x50
    static_assert(sizeof(MaterialGridData) == 0x50);
}
#pragma pack(pop)