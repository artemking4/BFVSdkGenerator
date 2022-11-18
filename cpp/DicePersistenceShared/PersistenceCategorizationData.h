// Object: PersistenceCategorizationData
// ClassId: 4412
// RuntimeId: 47466
// TypeInfo: 0x0000000144DCA0C0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Guid.h"
#include "../DicePersistenceShared/StatCategoryData.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class PersistenceCategorizationData : public Core::DataContainer {
        CString Code; // 0x18
        Int32 Index; // 0x20
        char pad_0x24[0x4];
        Array<CString> Identifiers; // 0x28
        Array<Guid> ObjectGuids; // 0x30
        Array<DicePersistenceShared::StatCategoryData> Categories; // 0x38
    }; // 0x40
    static_assert(sizeof(PersistenceCategorizationData) == 0x40);
}
#pragma pack(pop)