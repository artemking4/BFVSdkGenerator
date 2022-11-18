// Object: UIGetMetaDataEntityData
// ClassId: 3711
// RuntimeId: 33064
// TypeInfo: 0x0000000144D97390
#include "../Entity/EntityData.h"
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIGetMetaDataEntityData : public Entity::EntityData {
        Core::DataContainer UIObject; // 0x20
        CString StringKey; // 0x28
        Uint32 HashKey; // 0x30
        char pad_0x34[0x4];
        CString UIMetaDataType; // 0x38
    }; // 0x40
    static_assert(sizeof(UIGetMetaDataEntityData) == 0x40);
}
#pragma pack(pop)