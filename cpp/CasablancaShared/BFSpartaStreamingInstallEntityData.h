// Object: BFSpartaStreamingInstallEntityData
// ClassId: 2124
// RuntimeId: 31982
// TypeInfo: 0x0000000144D30E20
#include "../Entity/EntityData.h"
#include "../CasablancaShared/UILevelToInstallGroup.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/BFSpartaLevelSubscription.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFSpartaStreamingInstallEntityData : public Entity::EntityData {
        Array<CasablancaShared::UILevelToInstallGroup> LevelToInstallGroup; // 0x20
        Float32 InstallProgress; // 0x28
        char pad_0x2C[0x4];
        Array<CasablancaShared::BFSpartaLevelSubscription> LevelSubscriptionList; // 0x30
        Boolean IsInstalling; // 0x38
        Boolean IsMpInstalled; // 0x39
        char pad_0x3A[0x6];
    }; // 0x40
    static_assert(sizeof(BFSpartaStreamingInstallEntityData) == 0x40);
}
#pragma pack(pop)