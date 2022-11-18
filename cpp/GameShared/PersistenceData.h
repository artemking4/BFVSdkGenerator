// Object: PersistenceData
// ClassId: 814
// RuntimeId: 49279
// TypeInfo: 0x0000000144E75A40
#include "../GameShared/AbstractPersistenceData.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../GameShared/PersistentValueTemplateData.h"
#include "../GameShared/PersistenceStatGroup.h"

#pragma pack(push, 8)
namespace GameShared {
    class PersistenceData : public GameShared::AbstractPersistenceData {
        CString PersistenceName; // 0x20
        Array<GameShared::PersistentValueTemplateData> Values; // 0x28
        GameShared::PersistenceStatGroup ServerDefaultGroup; // 0x30
        GameShared::PersistenceStatGroup ClientDefaultGroup; // 0x38
        Boolean DeltaGameReports; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(PersistenceData) == 0x48);
}
#pragma pack(pop)