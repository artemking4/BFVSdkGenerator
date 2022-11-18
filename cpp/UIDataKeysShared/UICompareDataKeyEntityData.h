// Object: UICompareDataKeyEntityData
// ClassId: 3619
// RuntimeId: 39867
// TypeInfo: 0x0000000144F68E60
#include "../Entity/EntityData.h"
#include "../UIDataKeysShared/UISimpleDataSource.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace UIDataKeysShared {
    class UICompareDataKeyEntityData : public Entity::EntityData {
        UIDataKeysShared::UISimpleDataSource DataSource; // 0x20
        Array<CString> Values; // 0x30
        Boolean FireEventOnInit; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(UICompareDataKeyEntityData) == 0x40);
}
#pragma pack(pop)