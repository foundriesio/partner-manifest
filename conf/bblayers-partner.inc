# This is a FoundriesFactory Partner bblayers include file
# Meta-partner-nxp-imx is a FoundriesFactory partner layer
# Do not remove unless you really know what you are doing.
BASELAYERS += "${OEROOT}/layers/meta-partner-nxp-imx"

BSPLAYERS += " \
  ${OEROOT}/layers/meta-freescale \
  ${OEROOT}/layers/meta-freescale-3rdparty \
"
