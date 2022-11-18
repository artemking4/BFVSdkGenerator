// Object: TextUnlockPartData
// ClassId: 5162
// RuntimeId: 54771
// TypeInfo: 0x0000000144E816C0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Entity/ObjectBlueprint.h"

#pragma pack(push, 8)
namespace GameShared {
    class TextUnlockPartData : public Core::DataContainer {
        CString ShaderNodeName; // 0x18
        Entity::ObjectBlueprint MeshBlueprint; // 0x20
    }; // 0x28
    static_assert(sizeof(TextUnlockPartData) == 0x28);
}
#pragma pack(pop)