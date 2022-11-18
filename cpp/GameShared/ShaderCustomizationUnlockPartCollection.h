// Object: ShaderCustomizationUnlockPartCollection
// ClassId: 4587
// RuntimeId: 23349
// TypeInfo: 0x0000000144E81840
#include "../Core/DataContainer.h"
#include "../Entity/ObjectBlueprint.h"
#include "../Global/CString.h"
#include "../GameShared/CustomizedMeshMaterialsData.h"

#pragma pack(push, 8)
namespace GameShared {
    class ShaderCustomizationUnlockPartCollection : public Core::DataContainer {
        Array<Entity::ObjectBlueprint> MeshBlueprints; // 0x18
        CString ShaderNodeName; // 0x20
        Array<GameShared::CustomizedMeshMaterialsData> MeshMaterials; // 0x28
    }; // 0x30
    static_assert(sizeof(ShaderCustomizationUnlockPartCollection) == 0x30);
}
#pragma pack(pop)