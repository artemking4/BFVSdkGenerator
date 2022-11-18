// Object: ReportInstallationProgressEntityData
// ClassId: 3110
// RuntimeId: 23791
// TypeInfo: 0x0000000144EE3150
#include "../Entity/EntityData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Entity {
    class ReportInstallationProgressEntityData : public Entity::EntityData {
        CString InstallGroupName; // 0x20
    }; // 0x28
    static_assert(sizeof(ReportInstallationProgressEntityData) == 0x28);
}
#pragma pack(pop)