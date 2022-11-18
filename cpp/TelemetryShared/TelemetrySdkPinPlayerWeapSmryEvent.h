// Object: TelemetrySdkPinPlayerWeapSmryEvent
// ClassId: 5130
// RuntimeId: 12
// TypeInfo: 0x0000000144F59BE0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../TelemetryShared/RawJsonString.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinPlayerWeapSmryEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        CString id; // 0x108
        CString category; // 0x110
        CString type; // 0x118
        CString p_class; // 0x120
        CString p_team_id; // 0x128
        CString veh_id; // 0x130
        Int32 sht_fired; // 0x138
        Int32 weap_dur; // 0x13C
        Int32 sht_hit_sldr; // 0x140
        Int32 hd_sht_sldr; // 0x144
        Int32 fatl_sht_sldr; // 0x148
        Int32 fatl_sht_ads_sldr; // 0x14C
        Int32 dmg_sldr; // 0x150
        Int32 sht_hit_veh; // 0x154
        Int32 veh_dstr; // 0x158
        Int32 dmg_veh; // 0x15C
        TelemetryShared::RawJsonString weap_mods; // 0x160
        Uint32 weap_score_earned; // 0x168
        Uint32 weap_score_total; // 0x16C
        Uint32 FieldFlagChanged0; // 0x170
        char pad_0x174[0x4];
    }; // 0x178
    static_assert(sizeof(TelemetrySdkPinPlayerWeapSmryEvent) == 0x178);
}
#pragma pack(pop)