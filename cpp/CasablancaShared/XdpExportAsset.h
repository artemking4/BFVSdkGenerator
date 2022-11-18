// Object: XdpExportAsset
// ClassId: 917
// RuntimeId: 48410
// TypeInfo: 0x0000000144CFA5D0
#include "../Core/Asset.h"
#include "../CasablancaShared/XdpAchievementData.h"
#include "../CasablancaShared/XdpStatCodeData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class XdpExportAsset : public Core::Asset {
        Array<CasablancaShared::XdpAchievementData> ExportedAchievements; // 0x20
        Array<CasablancaShared::XdpStatCodeData> ExportedStats; // 0x28
    }; // 0x30
    static_assert(sizeof(XdpExportAsset) == 0x30);
}
#pragma pack(pop)