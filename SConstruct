
import subprocess

def builder(target, source, env):
	path = env['make_path']
	cmd = 'make -C ' + path
	shell_env = dict()

	shell_env['PATH'] = ':'.join(host_path)
	shell_env['PREFIX'] = Dir(env['T']).abspath

	shell_exec = subprocess.Popen(cmd, bufsize = 0, env = shell_env, shell = True)
	return shell_exec.wait()

env = Environment(O = '#/output/debug/build', T = '#/output/debug/target')
env.Append(BUILDERS = { 'Make' : env.Builder(action = env.Action(builder)) })

sub_folders = [ 'tools', 'src' ]
SConscript(dirs = sub_folders, exports = 'env')
