// Charges 2 to 5 of a shell type: its charge 1 magazine with a higher muzzle velocity
#define CHARGES_2_TO_5(type) \
    class shto_105mm_mag_##type##_x1_c2: shto_105mm_mag_##type##_x1_c1 { initSpeed = 160; displayNameShort = CSTRING(105mm_mag_##type##_x1_c2_DisplayNameShort); }; \
    class shto_105mm_mag_##type##_x1_c3: shto_105mm_mag_##type##_x1_c1 { initSpeed = 240; displayNameShort = CSTRING(105mm_mag_##type##_x1_c3_DisplayNameShort); }; \
    class shto_105mm_mag_##type##_x1_c4: shto_105mm_mag_##type##_x1_c1 { initSpeed = 320; displayNameShort = CSTRING(105mm_mag_##type##_x1_c4_DisplayNameShort); }; \
    class shto_105mm_mag_##type##_x1_c5: shto_105mm_mag_##type##_x1_c1 { initSpeed = 400; displayNameShort = CSTRING(105mm_mag_##type##_x1_c5_DisplayNameShort); }

class CfgMagazines {
    class vn_cannon_m101_mag_he_x8;
    class shto_105mm_mag_he_x1_c1: vn_cannon_m101_mag_he_x8 { displayName = CSTRING(105mm_mag_he_x1_c1_DisplayName); displayNameShort = CSTRING(105mm_mag_he_x1_c1_DisplayNameShort); initSpeed = 86; count = 1; };
    CHARGES_2_TO_5(he);

    class vn_cannon_m101_mag_ab_x8;
    class shto_105mm_mag_ab_x1_c1: vn_cannon_m101_mag_ab_x8 { displayName = CSTRING(105mm_mag_ab_x1_c1_DisplayName); displayNameShort = CSTRING(105mm_mag_ab_x1_c1_DisplayNameShort); initSpeed = 86; count = 1; };
    CHARGES_2_TO_5(ab);

    class vn_cannon_m101_mag_frag_x8;
    class shto_105mm_mag_frag_x1_c1: vn_cannon_m101_mag_frag_x8 { displayName = CSTRING(105mm_mag_frag_x1_c1_DisplayName); displayNameShort = CSTRING(105mm_mag_frag_x1_c1_DisplayNameShort); initSpeed = 86; count = 1; };
    CHARGES_2_TO_5(frag);

    class vn_cannon_m101_mag_wp_x8;
    class shto_105mm_mag_wp_x1_c1: vn_cannon_m101_mag_wp_x8 { displayName = CSTRING(105mm_mag_wp_x1_c1_DisplayName); displayNameShort = CSTRING(105mm_mag_wp_x1_c1_DisplayNameShort); initSpeed = 86; count = 1; };
    CHARGES_2_TO_5(wp);

    class vn_cannon_m101_mag_chem_x8;
    class shto_105mm_mag_chem_x1_c1: vn_cannon_m101_mag_chem_x8 { displayName = CSTRING(105mm_mag_chem_x1_c1_DisplayName); displayNameShort = CSTRING(105mm_mag_chem_x1_c1_DisplayNameShort); initSpeed = 86; count = 1; };
    CHARGES_2_TO_5(chem);

    class vn_cannon_m101_mag_lume_x8;
    class shto_105mm_mag_lume_x1_c1: vn_cannon_m101_mag_lume_x8 { displayName = CSTRING(105mm_mag_lume_x1_c1_DisplayName); displayNameShort = CSTRING(105mm_mag_lume_x1_c1_DisplayNameShort); initSpeed = 86; count = 1; };
    CHARGES_2_TO_5(lume);

    class shto_105mm_mag_icm_x1_c1: vn_cannon_m101_mag_lume_x8 { displayName = CSTRING(105mm_mag_icm_x1_c1_DisplayName); displayNameShort = CSTRING(105mm_mag_icm_x1_c1_DisplayNameShort); initSpeed = 86; count = 1; ammo = "shto_vn_shell_105mm_m444_icm_ammo"; };
    CHARGES_2_TO_5(icm);
};
