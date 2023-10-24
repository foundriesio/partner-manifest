BSPLAYERS = " \
  ${OEROOT}/layers/meta-openembedded/meta-multimedia \
  ${OEROOT}/layers/meta-arm/meta-arm \
  ${OEROOT}/layers/meta-arm/meta-arm-toolchain \
  ${OEROOT}/layers/meta-yocto/meta-yocto-bsp \
  ${OEROOT}/layers/meta-mediatek-bsp \
  ${OEROOT}/layers/meta-rity/meta \
  ${OEROOT}/layers/meta-mediatek-bluedroid \
  ${OEROOT}/layers/meta-lmp/meta-lmp-bsp \
"

# This is a FoundriesFactory Partner bblayers include file
# Meta-partner-mediatek is a FoundriesFactory partner layer
# Do not remove unless you really know what you are doing.
BASELAYERS += "${OEROOT}/layers/meta-partner-mediatek"
