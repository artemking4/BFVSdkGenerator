// Object: RagdollAsset
// ClassId: 682
// RuntimeId: 252
// TypeInfo: 0x0000000144F0DCC0
#include "../Core/Asset.h"
#include "../Entity/MaterialDecl.h"
#include "../Global/ResourceRef.h"

#pragma pack(push, 8)
namespace Physics {
    class RagdollAsset : public Core::Asset {
        Entity::MaterialDecl MaterialPair; // 0x20
        char pad_0x24[0x4];
        ResourceRef Resource; // 0x28
    }; // 0x30
    static_assert(sizeof(RagdollAsset) == 0x30);
}
#pragma pack(pop)