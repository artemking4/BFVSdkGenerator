// Object: EnumHubEntityData
// ClassId: 2701
// RuntimeId: 45436
// TypeInfo: 0x0000000144D12480
#include "../Entity/EnumLogicEntityBaseData.h"
#include "../Global/Int32.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EnumHubEntityData : public Entity::EnumLogicEntityBaseData {
        Int32 InputCount; // 0x28
        Int32 InputSelect; // 0x2C
        Array<Uint32> HashedInput; // 0x30
        CString TypeName; // 0x38
    }; // 0x40
    static_assert(sizeof(EnumHubEntityData) == 0x40);
}
#pragma pack(pop)